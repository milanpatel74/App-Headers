//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAlertViewActionController.h"

@class NSString, UIButton;

@interface SCAlertViewActionButtonController : NSObject <SCAlertViewActionController>
{
    UIButton *_actionButton;
    NSString *_title;
    unsigned long long _style;
    CDUnknownBlockType _actionHandler;
}

+ (id)actionWithTitle:(id)arg1 style:(unsigned long long)arg2 actionHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)requiresAdditionalPaddingIfLastItem;
- (struct UIEdgeInsets)edgeInsets;
- (void)becomeFirstResponder;
- (_Bool)adjustsSizeToMatchStandard;
- (unsigned long long)alertViewActionType;
- (id)actionView;
- (struct CGSize)actionViewSize;
- (id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 actionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

