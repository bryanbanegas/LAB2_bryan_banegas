#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_4_clicked()
{
    close();
}


void MainWindow::on_piramideButton_clicked()
{
    int altura=ui->spinBox->text().toInt();
    int ancho=2*altura-1;
    QString pyramid[altura][ancho];

    ui->tableWidget->setRowCount(altura);
    ui->tableWidget->setColumnCount(ancho);

    int cantidad=1;
    for(int i=0;i<altura;i++) {
        int pos=(ancho-cantidad)/2;
        for(int f=0;f<ancho;f++){
            pyramid[i][f]=" ";
        }
        for(int j=0;j<cantidad;j++){
            pyramid[i][pos+j]="*";
        }
        cantidad+=2;
    }

    for(int fila=0;fila<altura;fila++){
        for(int columna=0;columna<ancho;columna++){
            ui->tableWidget->setItem(fila, columna, new QTableWidgetItem(pyramid[fila][columna]));
        }
    }
}


void MainWindow::on_tarjetaButton_clicked()
{
    QString tarjeta=ui->lineEdit->text();
    int suma=0,prueba=0;
    bool multiplicar=false;
    //5408395558131109
    //
    if(tarjeta.length()==16){
        for(int i=tarjeta.length()-1;i>=0;i--){
            int numero=tarjeta.at(i).digitValue();
            if(multiplicar){
                numero=numero*2;
                QString n=QString::number(numero);
                if(numero>9){
                    int n1=n.at(0).digitValue();
                    int n2=n.at(1).digitValue();
                    suma+=n1+n2;
                }else{
                    suma+=numero;
                }
                multiplicar=false;
            }else{
                suma+=numero;
                prueba=numero;
                multiplicar=true;
            }
        }
        QString sumaFinal=QString::number(suma);
        if(sumaFinal.at(sumaFinal.length()-1)=='0'){
            ui->lineEdit_3->setText("Esta tarjeta de credito es valida.");
        }else{
            ui->lineEdit_3->setText("Esta tarjeta de credito es invalida.");
        }
    }else{
        ui->lineEdit_3->setText("La tarjeta tiene que tener 16 digitos.");
    }
}

char letras[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void MainWindow::on_pushButton_5_clicked()
{
    QString letra=ui->lineEdit_2->text();
    int valor=97;
    int numero;

    for(int i=0;i<26;i++){
        if(letras[i]==letra.at(0)){
            numero=valor;
        }
        valor++;
    }

    QString binario;
    if(numero%2==0){
        binario="0";
    }else{
        binario="1";
    }

    do{
        numero=numero/2;
        if(numero%2==0){
            binario+="0";
        }else{
            binario+="1";
        }
    }while(numero>1);

    QString binarioFinal;
    for(int i=binario.length()-1;i>=0;i--){
        binarioFinal+=binario.at(i);
    }
    ui->lineEdit_4->setText(binarioFinal);
}


void MainWindow::on_pushButton_7_clicked()
{
    QString letra=ui->lineEdit_2->text();
    char letraFinal=letra.toStdString()[0];
    int decimal=static_cast<int>(letraFinal);
    ui->lineEdit_4->setText(QString::number(decimal));
}

void MainWindow::on_pushButton_8_clicked()
{
    bool a;
    QString binario=ui->lineEdit_2->text();
    int numero=binario.toInt(&a,2);
    QString letra;
    int valor=97;
    for(int i=0;i<26;i++){
        if(valor==numero){
            letra=letras[i];
        }
        valor++;
    }
    ui->lineEdit_4->setText(letra);
}


void MainWindow::on_pushButton_6_clicked()
{
    //letra a hexadecimal
    QString letra=ui->lineEdit_2->text();

    char letraFinal = letra.toStdString().at(0);
    int decimal = static_cast<int>(letraFinal);
    //std::stringstream ss;
    //ss << std::hex << std::uppercase << decimal;
    ui->lineEdit_4->setText(QString::number(decimal));

}


void MainWindow::on_pushButton_9_clicked()
{
    int decimal=ui->lineEdit_2->text().toInt();
    int valor=97;
    QString letra;
    for(int i=0;i<26;i++){
        if(valor==decimal){
            letra=letras[i];
        }
        valor++;
    }
    ui->lineEdit_4->setText(letra);
}


void MainWindow::on_pushButton_10_clicked()
{
    //hexadecimal a letra
    QString letra=ui->lineEdit_2->text();
}

