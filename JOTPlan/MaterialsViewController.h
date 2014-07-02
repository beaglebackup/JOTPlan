//
//  MaterialsViewController.h
//  JOTPlan
//
//  Created by Gabriel on 5/22/14.
//  Copyright (c) 2014 Gabriel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MaterialsViewController : UIViewController{
    IBOutlet UIScrollView *materialsScrollView;
}
//Bar Button
@property (strong, nonatomic) IBOutlet UIBarButtonItem *materialsSaveButton;


//Product Labels
@property (strong, nonatomic) IBOutlet UILabel *productLabel;
@property (strong, nonatomic) IBOutlet UILabel *p1Label;
@property (strong, nonatomic) IBOutlet UILabel *p1NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *p1ProductLabel;
@property (strong, nonatomic) IBOutlet UILabel *p1FormulationLabel;
@property (strong, nonatomic) IBOutlet UILabel *p1QuantityLabel;
@property (strong, nonatomic) IBOutlet UILabel *p1VendorLabel;
@property (strong, nonatomic) IBOutlet UILabel *p2Label;
@property (strong, nonatomic) IBOutlet UILabel *p2NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *p2ProductLabel;
@property (strong, nonatomic) IBOutlet UILabel *p2FormulationLabel;
@property (strong, nonatomic) IBOutlet UILabel *p2QuantityLabel;
@property (strong, nonatomic) IBOutlet UILabel *p2VendorLabel;
@property (strong, nonatomic) IBOutlet UILabel *p3Label;
@property (strong, nonatomic) IBOutlet UILabel *p3NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *p3ProductLabel;
@property (strong, nonatomic) IBOutlet UILabel *p3Formulation;
@property (strong, nonatomic) IBOutlet UILabel *p3QuantityLabel;
@property (strong, nonatomic) IBOutlet UILabel *p3VendorLabel;
@property (strong, nonatomic) IBOutlet UILabel *p4Label;
@property (strong, nonatomic) IBOutlet UILabel *p4NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *p4ProductLabel;
@property (strong, nonatomic) IBOutlet UILabel *p4FormulationLabel;
@property (strong, nonatomic) IBOutlet UILabel *p4QuantityLabel;
@property (strong, nonatomic) IBOutlet UILabel *p4VendorLabel;
@property (strong, nonatomic) IBOutlet UILabel *p5Label;
@property (strong, nonatomic) IBOutlet UILabel *p5NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *p5ProductLabel;
@property (strong, nonatomic) IBOutlet UILabel *p5FormulationLabel;
@property (strong, nonatomic) IBOutlet UILabel *p5QuantityLabel;
@property (strong, nonatomic) IBOutlet UILabel *p5VendorLabel;




//Product Textfields
@property (strong, nonatomic) IBOutlet UITextField *p1NameTextField;
@property (strong, nonatomic) IBOutlet UITextField *p1ProductTextField;
@property (strong, nonatomic) IBOutlet UITextField *p1FormulationTextField;
@property (strong, nonatomic) IBOutlet UITextField *p1QuantityTextField;
@property (strong, nonatomic) IBOutlet UITextField *p1VendorTextField;
@property (strong, nonatomic) IBOutlet UITextField *p2NameTextField;
@property (strong, nonatomic) IBOutlet UITextField *p2ProductTextField;
@property (strong, nonatomic) IBOutlet UITextField *p2FormulationTextField;
@property (strong, nonatomic) IBOutlet UITextField *p2QuantityTextField;
@property (strong, nonatomic) IBOutlet UITextField *p2VendorTextField;
@property (strong, nonatomic) IBOutlet UITextField *p3NameTextField;
@property (strong, nonatomic) IBOutlet UITextField *p3ProductTextField;

@property (strong, nonatomic) IBOutlet UITextField *p3FormulationTextField;
@property (strong, nonatomic) IBOutlet UITextField *p3QuantitiyTextField;
@property (strong, nonatomic) IBOutlet UITextField *p3VendorTextField;
@property (strong, nonatomic) IBOutlet UITextField *p4NameTextField;
@property (strong, nonatomic) IBOutlet UITextField *p4ProductTextField;
@property (strong, nonatomic) IBOutlet UITextField *p4FormulationTextField;
@property (strong, nonatomic) IBOutlet UITextField *p4QuantityTextField;
@property (strong, nonatomic) IBOutlet UITextField *p4VendorTextField;
@property (strong, nonatomic) IBOutlet UITextField *p5NameTextField;
@property (strong, nonatomic) IBOutlet UITextField *p5ProductTextField;
@property (strong, nonatomic) IBOutlet UITextField *p5FormulationTextField;
@property (strong, nonatomic) IBOutlet UITextField *p5QuantityTextField;
@property (strong, nonatomic) IBOutlet UITextField *p5VendorTextField;


//Hardware Labels
@property (strong, nonatomic) IBOutlet UILabel *hardwareLabel;
@property (strong, nonatomic) IBOutlet UILabel *h1Label;
@property (strong, nonatomic) IBOutlet UILabel *h1NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *h1ProductLabel;
@property (strong, nonatomic) IBOutlet UILabel *h1TypeLabel;
@property (strong, nonatomic) IBOutlet UILabel *h1QuantityLabel;
@property (strong, nonatomic) IBOutlet UILabel *h1VendorLabel;
@property (strong, nonatomic) IBOutlet UILabel *h2Label;
@property (strong, nonatomic) IBOutlet UILabel *h2NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *h2ProductLabel;
@property (strong, nonatomic) IBOutlet UILabel *h2TypeLabel;
@property (strong, nonatomic) IBOutlet UILabel *h2QuantityLabel;
@property (strong, nonatomic) IBOutlet UILabel *h2VendorLabel;
@property (strong, nonatomic) IBOutlet UILabel *h3Label;
@property (strong, nonatomic) IBOutlet UILabel *h3NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *h3ProductLabel;
@property (strong, nonatomic) IBOutlet UILabel *h3TypeLabel;
@property (strong, nonatomic) IBOutlet UILabel *h3QuantityLabel;
@property (strong, nonatomic) IBOutlet UILabel *h3VendorLabel;
@property (strong, nonatomic) IBOutlet UILabel *h4Label;
@property (strong, nonatomic) IBOutlet UILabel *h4NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *h4ProductLabel;
@property (strong, nonatomic) IBOutlet UILabel *h4TypeLabel;
@property (strong, nonatomic) IBOutlet UILabel *h4QuantityLabel;
@property (strong, nonatomic) IBOutlet UILabel *h4VendorLabel;
@property (strong, nonatomic) IBOutlet UILabel *h5Label;
@property (strong, nonatomic) IBOutlet UILabel *h5NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *h5ProductLabel;
@property (strong, nonatomic) IBOutlet UILabel *h5TypeLabel;
@property (strong, nonatomic) IBOutlet UILabel *h5QuantityLabel;
@property (strong, nonatomic) IBOutlet UILabel *h5VendorLabel;





//Hardware TextFields
@property (strong, nonatomic) IBOutlet UITextField *h1NameTextField;
@property (strong, nonatomic) IBOutlet UITextField *h1ProductTextField;
@property (strong, nonatomic) IBOutlet UITextField *h1TypeTextField;
@property (strong, nonatomic) IBOutlet UITextField *h1QuantityTextField;
@property (strong, nonatomic) IBOutlet UITextField *h1VendorTextField;
@property (strong, nonatomic) IBOutlet UITextField *h2NameTextField;
@property (strong, nonatomic) IBOutlet UITextField *h2ProductTextField;
@property (strong, nonatomic) IBOutlet UITextField *h2TypeTextField;
@property (strong, nonatomic) IBOutlet UITextField *h2QuantityTextField;
@property (strong, nonatomic) IBOutlet UITextField *h2VendorTextField;
@property (strong, nonatomic) IBOutlet UITextField *h3NameTextField;
@property (strong, nonatomic) IBOutlet UITextField *h3ProductTextField;
@property (strong, nonatomic) IBOutlet UITextField *h3TypeTextField;
@property (strong, nonatomic) IBOutlet UITextField *h3QuantityTextField;
@property (strong, nonatomic) IBOutlet UITextField *h3VendorTextField;
@property (strong, nonatomic) IBOutlet UITextField *h4NameTextField;
@property (strong, nonatomic) IBOutlet UITextField *h4ProductTextField;
@property (strong, nonatomic) IBOutlet UITextField *h4TypeTextField;
@property (strong, nonatomic) IBOutlet UITextField *h4QuantityTextField;
@property (strong, nonatomic) IBOutlet UITextField *h4VendorTextField;
@property (strong, nonatomic) IBOutlet UITextField *h5NameTextField;
@property (strong, nonatomic) IBOutlet UITextField *h5ProductTextField;
@property (strong, nonatomic) IBOutlet UITextField *h5TypeTextField;
@property (strong, nonatomic) IBOutlet UITextField *h5QuantityTextField;
@property (strong, nonatomic) IBOutlet UITextField *h5VendorTextField;






@end
