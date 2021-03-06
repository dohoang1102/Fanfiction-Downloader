//
//  StoryRenderer.h
//  Fanfiction Downloader
//
//  Created by Torsten Kammer on 04.08.12.
//  Copyright (c) 2012 Torsten Kammer. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class StoryOverview;

@interface StoryRenderer : NSObject

- (id)initWithStoryOverview:(StoryOverview *)overview chapters:(NSArray *)chapters;

- (NSData *)renderedStory;

// For use by the email sender
@property (readonly, copy) NSString *author;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *summary;

@end
