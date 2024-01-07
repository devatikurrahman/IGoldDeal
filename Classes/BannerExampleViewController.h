// BannerExampleViewController.h
//  Copyright 2011 Google Inc. All rights reserved.

// Import GADBannerView’s definition from the SDK
#import "AdWhirlDelegateProtocol.h"
#import "GADBannerView.h"

@interface BannerExampleViewController : UIViewController <AdWhirlDelegate>{
  // Declare one as an instance variable
  GADBannerView *bannerView_;
	
}

@end
