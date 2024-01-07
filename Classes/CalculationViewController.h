//
//  CalculationViewController.h
//  CalculationApps
//
//  Created by Atikur Rahman on 8/11/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CalculationViewController : UIViewController <UITextFieldDelegate> {

	IBOutlet UIButton *gramsBtn;
	IBOutlet UIButton *pennyWeightBtn;
	
	IBOutlet UITextField *weight_txt;
	IBOutlet UITextField *offering_txt;
	IBOutlet UILabel *weightLabel;
	IBOutlet UILabel *offerLabel;
	
	IBOutlet UILabel *grams_penny_label;
 	IBOutlet UILabel *currencyLabel;
	IBOutlet UILabel *karatsLabel;
	
	IBOutlet UILabel *messageLabel1;
	IBOutlet UILabel *messageLabel2;
	IBOutlet UILabel *weightMessageLabel;
	
	IBOutlet UIView *resultView;
	IBOutlet UILabel *goldAmountLabel;
	IBOutlet UILabel *moneyOfferedLabel;
	IBOutlet UILabel *resultMessageLabel;
	
	NSDictionary *data;
	
}

@property (nonatomic, retain) NSDictionary *data;

-(void) setCurrencyLabel;
-(void) setKaratsLabel;
-(void) setWeightLabel;

-(IBAction) selectWeight;
-(IBAction) selectCurrency;
-(IBAction) selectKarats;
-(IBAction) showResult;
-(IBAction) showText;


@end
