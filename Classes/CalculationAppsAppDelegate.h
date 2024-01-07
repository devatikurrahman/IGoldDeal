//
//  CalculationAppsAppDelegate.h
//  CalculationApps
//
//  Created by Atikur Rahman on 8/11/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CalculationViewController.h"
#import "CurrencyViewController.h"
#import "KaratsViewController.h"
#import "WeightViewController.h";
#import "ResultViewController.h"

#import "BannerExampleViewController.h"

@interface CalculationAppsAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	
	CalculationViewController *cvc;
	CurrencyViewController *currencyView;
	KaratsViewController *karatsView;
	WeightViewController *weightView;
	ResultViewController *rvc;
	
	NSDictionary *currencyItem;
	NSDictionary *karatsItem;
	
	BannerExampleViewController *bevc ;
}

@property (nonatomic, retain) BannerExampleViewController *bevc ;

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) CalculationViewController *cvc;
@property (nonatomic, retain) ResultViewController *rvc;
@property (nonatomic, retain) CurrencyViewController *currencyView;
@property (nonatomic, retain) KaratsViewController *karatsView;
@property (nonatomic, retain) WeightViewController *weightView;

@property (nonatomic, retain) NSDictionary *currencyItem;
@property (nonatomic, retain) NSDictionary *karatsItem;

@end

