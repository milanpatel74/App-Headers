//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKAvatarView, MKImageView;

@interface SKPProfilePictureView : UIView
{
    int _appearance;
    unsigned long long _supportedOrientations;
    MKImageView *_backgroundAvatarImageView;
    UIView *_backgroundImageFadeView;
    MKAvatarView *_avatarView;
}

@property(nonatomic) int appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) MKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *backgroundImageFadeView; // @synthesize backgroundImageFadeView=_backgroundImageFadeView;
@property(retain, nonatomic) MKImageView *backgroundAvatarImageView; // @synthesize backgroundAvatarImageView=_backgroundAvatarImageView;
@property(nonatomic) unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
- (void).cxx_destruct;
@property(readonly, nonatomic) double avatarFrameHeight;
@property(readonly, nonatomic) double frameHeight;
- (void)setViewAppearance:(int)arg1;
- (void)setAvatarImage:(id)arg1;
- (void)setupAvatarView;
- (void)setupBackgroundAvatarView;
- (void)setupAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

@end

