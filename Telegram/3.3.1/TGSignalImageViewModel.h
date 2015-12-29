//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernViewModel.h"

@class NSString;

@interface TGSignalImageViewModel : TGModernViewModel
{
    CDUnknownBlockType _signalGenerator;
    NSString *_identifier;
    double _progress;
    _Bool _showProgress;
    struct CGRect _transitionContentRect;
}

@property(nonatomic) struct CGRect transitionContentRect; // @synthesize transitionContentRect=_transitionContentRect;
@property(nonatomic) _Bool showProgress; // @synthesize showProgress=_showProgress;
- (void).cxx_destruct;
- (void)unbindView:(id)arg1;
- (void)bindViewToContainer:(id)arg1 viewStorage:(id)arg2;
- (void)_updateViewStateIdentifier;
- (void)setSignalGenerator:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (Class)viewClass;
- (id)init;

@end

