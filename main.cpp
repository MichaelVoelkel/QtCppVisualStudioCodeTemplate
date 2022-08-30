#include <QApplication>
#include <QMainWindow>

class MainWindow : public QMainWindow
{
public:
    explicit MainWindow() : QMainWindow(nullptr) {}
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}