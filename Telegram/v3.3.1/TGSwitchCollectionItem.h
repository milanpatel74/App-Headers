//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItem.h"

#import "TGSwitchCollectionItemViewDelegate.h"

@class ASHandle, NSString;

@interface TGSwitchCollectionItem : TGCollectionItem <TGSwitchCollectionItemViewDelegate>
{
    _Bool _isOn;
    ASHandle *_interfaceHandle;
    CDUnknownBlockType _toggled;
    NSString *_title;
}

@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType toggled; // @synthesize toggled=_toggled;
@property(retain, nonatomic) ASHandle *interfaceHandle; // @synthesize interfaceHandle=_interfaceHandle;
- (void).cxx_destruct;
- (void)switchCollectionItemViewChangedValue:(id)arg1 isOn:(_Bool)arg2;
- (void)setIsOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)unbindView;
- (void)bindView:(id)arg1;
- (struct CGSize)itemSizeForContainerSize:(struct CGSize)arg1;
- (Class)itemViewClass;
- (id)initWithTitle:(id)arg1 isOn:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
