//
//  TouraAppDelegate.h
//  Toura
//
//  Created by Gregory Jastrab on 1/5/11.
//  Copyright Toura, LLC. 2011. All rights reserved.
//

#import <UIKit/UIKit.h>
#ifdef PHONEGAP_FRAMEWORK
    #import <PhoneGap/PhoneGapDelegate.h>
#else
    #import "PhoneGapDelegate.h"
#endif

@interface TouraAppDelegate : PhoneGapDelegate {
    NSString *invokeString;
    NSDictionary *launchNotification;
}

@property (copy)  NSString *invokeString;
@property (nonatomic, retain) NSDictionary *launchNotification;

- (BOOL)doesRequest:(NSURLRequest *)request comeFromWebView:(UIWebView *)webView;

@end

