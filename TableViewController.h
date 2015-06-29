//
//  TableViewController.h
//  BlogReader
//
//  Created by Pierre Larose on 4/22/15.
//  Copyright (c) 2015 Pierre Larose. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UITableViewController <UITableViewDataSource,UITableViewDelegate>

@property (strong, nonatomic) NSMutableArray *blogPosts;
@end
