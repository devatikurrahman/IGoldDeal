//
//  ResultViewController.h
//  CalculationApps
//
//  Created by Atikur Rahman on 8/12/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ResultViewController : UIViewController {

	IBOutlet UILabel *label1;
	IBOutlet UILabel *label2;
	IBOutlet UILabel *resultLabel;
	IBOutlet UILabel *offertLabel;
	IBOutlet UILabel *messageLabel;
	
}

@property (nonatomic, retain) IBOutlet UILabel *resultLabel;
@property (nonatomic, retain) IBOutlet UILabel *offertLabel;
@property (nonatomic, retain) IBOutlet UILabel *messageLabel; 


-(IBAction) hideResultView;
-(void) showMessageWithColor:(NSInteger) color_value;

@end
