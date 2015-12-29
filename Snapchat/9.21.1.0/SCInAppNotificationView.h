//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer;

@interface SCInAppNotificationView : UIView <UIGestureRecognizerDelegate>
{
    id <SCInAppNotificationDelegate> _notificationDelegate;
    id <SCHeaderDataSource> _dataSource;
    id <SCHeaderDelegate> _headerDelegate;
    NSString *_username;
    NSString *_type;
    UIImageView *_icon;
    UILabel *_label;
    UIView *_iconAndLabelView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIButton *_leftButton;
    UIButton *_rightButton;
    struct CGRect _frameHidden;
    struct CGRect _frameVisible;
}

+ (id)getLabelTextForNotification:(id)arg1;
+ (_Bool)usePushMessageForNotification:(id)arg1;
+ (id)supportedNotificationTypes;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIView *iconAndLabelView; // @synthesize iconAndLabelView=_iconAndLabelView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) struct CGRect frameVisible; // @synthesize frameVisible=_frameVisible;
@property(nonatomic) struct CGRect frameHidden; // @synthesize frameHidden=_frameHidden;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <SCHeaderDelegate> headerDelegate; // @synthesize headerDelegate=_headerDelegate;
@property(nonatomic) __weak id <SCHeaderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCInAppNotificationDelegate> notificationDelegate; // @synthesize notificationDelegate=_notificationDelegate;
- (void).cxx_destruct;
- (id)iconImageForType:(id)arg1;
- (id)backgroundColorForType:(id)arg1;
- (void)adjustButtonFrames;
- (void)rightButtonPressed;
- (void)leftButtonPressed;
- (void)pressed:(id)arg1;
- (void)unhideNotification;
- (void)hideNotification;
- (void)hideNotificationsWithUsername:(id)arg1;
- (long long)determineStatusBarStyleToDisplay;
- (void)fadeHeaderImageForNotificationIfNecessary:(_Bool)arg1;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1 hideInSeconds:(double)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)reloadData;
- (void)setIconAndLabelFrames;
- (void)dealloc;
- (id)initWithNotificationInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

