//
//  KaratsViewController.h
//  CalculationApps
//
//  Created by Atikur Rahman on 8/11/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ApplicationCell.h"


@interface KaratsViewController : UIViewController <UIPickerViewDelegate> {
	
	UIPickerView *karatsPicker;
	
	NSMutableArray *karatsList;
    NSDictionary *data;
		
}

@property (nonatomic, retain) NSMutableArray *karatsList;
@property (nonatomic, retain) NSDictionary *data;

-(IBAction) hideKaratsPicker;

@end
