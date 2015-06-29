//
//  WebViewController.h
//  BlogReader
//
//  Created by Pierre Larose on 4/23/15.
//  Copyright (c) 2015 Pierre Larose. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;
@end
