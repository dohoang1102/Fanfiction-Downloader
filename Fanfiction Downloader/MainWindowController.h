//
//  MainWindowController.h
//  Fanfiction Downloader
//
//  Created by Torsten Kammer on 08.08.12.
//  Copyright (c) 2012 Torsten Kammer. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class SheetController;

@interface MainWindowController : NSWindowController <NSWindowDelegate>

@property (retain, nonatomic) SheetController *currentSheet;

- (void)startSheet:(SheetController *)sheet;
- (void)endSheet;

- (void)showError:(NSError *)error resumeAfter:(BOOL)resume;

@end
