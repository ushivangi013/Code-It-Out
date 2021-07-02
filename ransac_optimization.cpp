class point_and_box
{
public:
    int idx;
    int box;
    point_and_box(int arg_idx) {
        idx = arg_idx;  // points index in the input cloud
        box = -1;   // to indicate which box it belongs
    }
    // for comparing user defined class
    bool operator < (const point_and_box& rhs) const
    {
        return(box < rhs.box);
    }

};

template <class T> class PointXYZ
{
public:
    T x, y, z;
    int clusterID = -1;

    PointXYZ() {    }

    PointXYZ(T arg_x, T arg_y, T arg_z) {
        x = arg_x;
        y = arg_y;
        z = arg_z;
    }
    // for equating 2 points
    PointXYZ <T>& operator = (const PointXYZ <T>& rhs) {
        x = rhs.x;
        y = rhs.y;
        z = rhs.z;
        return *this;
    }

    PointXYZ(const PointXYZ <T>& rhs) {
        x = rhs.x;
        y = rhs.y;
        z = rhs.z;
    }
    // for adding 2 points 
    PointXYZ <T>& operator+=(const PointXYZ <T>& rhs) {
        x += rhs.x;
        y += rhs.y;
        z += rhs.z;
        return *this;
    }
};

struct KdTree_2d 
{

    Node* root;

    KdTree_2d()
        : root(nullptr) {}

    void insertHelper(Node** node, int depth, PointXYZ<long double> point, int id) {
        if (*node == nullptr) {
            (*node) = new Node(point, id);
        }
        else {
            int cd = depth % 2;  // 2 dim kd-tree

            if (cd == 0) {
                if (point.x < (*node)->point.x)
                    insertHelper(&(*node)->left, depth + 1, point, id);
                else
                    insertHelper(&(*node)->right, depth + 1, point, id);
            }
            else {
                if (point.y < (*node)->point.y)
                    insertHelper(&(*node)->left, depth + 1, point, id);
                else
                    insertHelper(&(*node)->right, depth + 1, point, id);
            }
        }
    }

    void insert(PointXYZ<long double> point, int id) {
        insertHelper(&root, 0, point, id);
    }

    void searchHelper(PointXYZ<long double> pivot, Node* node, int depth, float distanceTol, std::vector<int>& ids) {
        if (node != NULL) {
            //cout << "yayay1" << endl;
            if ((node->point.x >= (pivot.x - distanceTol) && (node->point.x <= (pivot.x + distanceTol))) && (node->point.y >= (pivot.y - distanceTol) && (node->point.y <= (pivot.y + distanceTol))))
            {
                float distance = sqrt((node->point.x - pivot.x) * (node->point.x - pivot.x) + (node->point.y - pivot.y) * (node->point.y - pivot.y));

                if (distance <= distanceTol) {
                    ids.push_back(node->id);
                }
            }
            //cout << "yayay2" << endl;
            if (depth % 2 == 0) // 2 dim kd-tree
            {
                if ((pivot.x - distanceTol) < node->point.x) {
                    searchHelper(pivot, node->left, depth + 1, distanceTol, ids);
                }

                if ((pivot.x + distanceTol) > node->point.x) {
                    searchHelper(pivot, node->right, depth + 1, distanceTol, ids);
                }
            }
            else {
                if ((pivot.y - distanceTol) < node->point.y) {
                    searchHelper(pivot, node->left, depth + 1, distanceTol, ids);
                }
                if ((pivot.y + distanceTol) > node->point.y) {
                    searchHelper(pivot, node->right, depth + 1, distanceTol, ids);
                }
            }
            // cout << "yayay3" << endl;

        }
    }

    // return a list of point ids in the tree that are within distance of pivot
    std::vector<int> search(PointXYZ <long double> pivot, float distanceTol) {
        std::vector<int> ids;
        searchHelper(pivot, root, 0, distanceTol, ids);

        return ids;
    }
};





bool plane_check(vector< PointXYZ <long double> > planeCloud, double a, double b, double c, double d) 
{
    if (planeCloud.size() < 2) { // 2 is just an assumption not proceed if cloud size less than 2
        return false;
    }


    long double max_x = planeCloud[0].x;
    long double min_x = planeCloud[0].x;
    long double max_y = planeCloud[0].y;
    long double min_y = planeCloud[0].y;


    auto* tree = new KdTree_2d;
    for (int i = 0; i < planeCloud.size(); i++) {
        tree->insert(planeCloud[i], i);
    }

    for (int i = 1; i < planeCloud.size(); i++) {
        if (planeCloud[i].x > max_x) {
            max_x = planeCloud[i].x;
        }
        if (planeCloud[i].x < min_x) {
            min_x = planeCloud[i].x;
        }
        if (planeCloud[i].y > max_y) {
            max_y = planeCloud[i].y;
        }
        if (planeCloud[i].y < min_y) {
            min_y = planeCloud[i].y;
        }
    }

    cout << "plane_check : " << min_x << " " << max_x << " " << min_y << " " << max_y << endl;

    ofstream y("D:\\plc_try1\\pcdss\\z_compare.pcd");

    y << "# .PCD v0.7 - Point Cloud Data file format\nVERSION 0.7\nFIELDS x y z rgb\nSIZE 4 4 4 4\nTYPE F F F U\nCOUNT 1 1 1 1\n";

    y << "WIDTH " << planeCloud.size() << endl;

    y << "HEIGHT 1\nVIEWPOINT 0 0 0 1 0 0 0\n";

    y << "POINTS " << planeCloud.size() << endl;

    y << "DATA ascii\n";


    for (int i = 0; i < planeCloud.size(); i++)
    {
        y << planeCloud[i].x << " " << planeCloud[i].y << " " << planeCloud[i].z << " " << 16711680 << endl;
    }
    y.close();

    // storing the cloud to compare pcd files
    ofstream yp("D:\\plc_try1\\pcdss\\compare_cloud.pcd");
    vector< PointXYZ <long double> > compare_cloud;

    yp << "# .PCD v0.7 - Point Cloud Data file format\nVERSION 0.7\nFIELDS x y z rgb\nSIZE 4 4 4 4\nTYPE F F F U\nCOUNT 1 1 1 1\n";

    yp << "WIDTH " << compare_cloud.size() << endl;

    yp << "HEIGHT 1\nVIEWPOINT 0 0 0 1 0 0 0\n";

    yp << "POINTS " << compare_cloud.size() << endl;

    yp << "DATA ascii\n";
    double occupied = 0;
    double unoccupied = 0;
    double grid_size = 0.005;
    double search_radius = 0.006;
    int min_neigh = 1;
    for (long double i = min_y; i <= max_y; i += grid_size) {
        for (long double j = min_x; j <= max_x; j += grid_size) {
            PointXYZ <long double> pt;
            pt.x = j;
            pt.y = i;
            pt.z = -(a * pt.x + b * pt.y + d) / c;
            std::vector<int> clusterIndex = tree->search(pt, search_radius);
            if (clusterIndex.size() >= min_neigh) {
                occupied++;
            }
            else {
                unoccupied++;
            }
            yp << pt.x << " " << pt.y << " " << pt.z << " " << 16711680 << endl;
            compare_cloud.push_back(pt);
        }
    }

    yp.close();
    double percent_occupied = (occupied / (occupied + unoccupied));
    cout << "percentage occupied : " << percent_occupied << endl;

    if (percent_occupied >= 0.5) {
        return false;
    }
    return false;

}
