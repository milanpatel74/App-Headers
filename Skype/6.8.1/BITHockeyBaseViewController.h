//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@interface BITHockeyBaseViewController : UITableViewController
{
    _Bool _modal;
    _Bool _modalAnimated;
}

@property(nonatomic) _Bool modalAnimated; // @synthesize modalAnimated=_modalAnimated;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)onDismissModal:(id)arg1;
- (id)initWithModalStyle:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 modal:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1;

@end

