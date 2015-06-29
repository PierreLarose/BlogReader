//
//  BlogPost.h
//  BlogReader
//
//  Created by Pierre Larose on 4/22/15.
//  Copyright (c) 2015 Pierre Larose. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject
@property(nonatomic, strong) NSString *title;
@property(nonatomic, strong) NSString *author;
@property(nonatomic, strong) NSString *thumbnail;
@property(nonatomic, strong) NSString *date;
@property(nonatomic, strong) NSURL *url;



//Designated Initializer
-(id) initWithTitle: (NSString *) title;
+(id) blogPostWithTitle: (NSString *) title;

-(NSURL *) thumbnailURL;
-(NSString *) formattedDate;


@end
