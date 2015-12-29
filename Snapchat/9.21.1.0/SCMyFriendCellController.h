//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMyFriendCellViewDelegate.h"

@class NSString, SCMyFriendCellView;

@interface SCMyFriendCellController : NSObject <SCMyFriendCellViewDelegate>
{
    id <SCMyFriendCellControllerDelegate> _delegate;
    SCMyFriendCellView *_currentlySelectedCellView;
    long long _profilePageType;
}

+ (id)formatSubLabelTextForPhoneNumbers:(id)arg1;
+ (id)calculateSubLabelTextForFriend:(id)arg1 alreadyAdded:(_Bool)arg2 whenSelected:(_Bool)arg3;
+ (id)calculateNameLabelTextForFriend:(id)arg1 whenSelected:(_Bool)arg2;
@property(nonatomic) long long profilePageType; // @synthesize profilePageType=_profilePageType;
@property(retain, nonatomic) SCMyFriendCellView *currentlySelectedCellView; // @synthesize currentlySelectedCellView=_currentlySelectedCellView;
@property(nonatomic) __weak id <SCMyFriendCellControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)calculateMyFriendCellTypeForFriend:(id)arg1;
- (void)updateMyFriendCellView:(id)arg1 selected:(_Bool)arg2 animated:(_Bool)arg3;
- (void)didPressChatButton:(id)arg1 forFriend:(id)arg2;
- (void)didPressCameraButton:(id)arg1 forFriend:(id)arg2;
- (void)didPressSettingsButton:(id)arg1 forFriend:(id)arg2;
- (void)didPressAddFriendButton:(id)arg1 forFriend:(id)arg2;
- (void)setSelectedForAddInRegistration:(id)arg1 selected:(_Bool)arg2;
- (void)clearMyFriendCellViewSelection;
- (void)setSelected:(id)arg1;
- (void)updateMyFriendCellView:(id)arg1 forFriend:(id)arg2 alreadyAdded:(_Bool)arg3 selected:(_Bool)arg4;
- (void)updateMyFriendCellView:(id)arg1 forAddedFriend:(id)arg2 alreadyAdded:(_Bool)arg3 highlighted:(_Bool)arg4 selected:(_Bool)arg5;
- (id)getMyFriendCellViewForAddedFriend:(id)arg1 alreadyAdded:(_Bool)arg2 highlighted:(_Bool)arg3 withStyleKey:(id)arg4 page:(id)arg5;
- (id)getMyFriendCellViewForFriend:(id)arg1 alreadyAdded:(_Bool)arg2 withStyleKey:(id)arg3 page:(id)arg4;
- (id)initWithProfilePageType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

