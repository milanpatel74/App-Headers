//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SKPGroupProfilePictureViewDelegate.h"

@class MKGradientView, MKTableView, NSNumber, NSString, NSURL, SKPGroupProfileEntryCollection, SKPGroupProfilePictureView, UIImageView;

@interface SKPGroupProfileView : UIView <SKPGroupProfilePictureViewDelegate>
{
    _Bool _canLeaveGroup;
    _Bool _notificationsEnabled;
    _Bool _sharedChat;
    _Bool _chatHistory;
    id <SKPGroupProfileViewDelegate> _delegate;
    MKTableView *_tableView;
    SKPGroupProfilePictureView *_profilePictureView;
    NSURL *_avatarURL;
    NSNumber *_numberOfParticipants;
    UIImageView *_backgroundAvatarImageView;
    MKGradientView *_gradientView;
    SKPGroupProfileEntryCollection *_dataSource;
}

@property(retain, nonatomic) SKPGroupProfileEntryCollection *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MKGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIImageView *backgroundAvatarImageView; // @synthesize backgroundAvatarImageView=_backgroundAvatarImageView;
@property(nonatomic) _Bool chatHistory; // @synthesize chatHistory=_chatHistory;
@property(nonatomic) _Bool sharedChat; // @synthesize sharedChat=_sharedChat;
@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(nonatomic) _Bool canLeaveGroup; // @synthesize canLeaveGroup=_canLeaveGroup;
@property(retain, nonatomic) NSNumber *numberOfParticipants; // @synthesize numberOfParticipants=_numberOfParticipants;
@property(retain, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) SKPGroupProfilePictureView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(retain, nonatomic) MKTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SKPGroupProfileViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)reload;
- (void)createTableHeader;
- (void)updateLayoutOnVOStatusChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
