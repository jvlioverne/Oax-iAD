//
//  ViewController.h
//  Oax_iad
//
//  Created by Benjas on 12/02/15.
//  Copyright (c) 2015 Benjas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>

@interface ViewController : UIViewController <UIApplicationDelegate,ADBannerViewDelegate>
{
    ADBannerView *adView;
    BOOL bannerIsVisible;
}

@end

