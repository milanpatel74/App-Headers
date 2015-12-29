//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class Friend, UIImageView;

@interface SCProfilePictureThumbnail : UIView
{
    _Bool _highlighted;
    _Bool _thumbnailLoaded;
    Friend *_friend;
    UIImageView *_profileImageView;
    UIImageView *_ghostBorderView;
    UIImageView *_ghostFaceView;
}

+ (id)thumbnailWithFriend:(id)arg1 contexts:(id)arg2;
@property(retain, nonatomic) UIImageView *ghostFaceView; // @synthesize ghostFaceView=_ghostFaceView;
@property(retain, nonatomic) UIImageView *ghostBorderView; // @synthesize ghostBorderView=_ghostBorderView;
@property(retain, nonatomic) UIImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
- (void).cxx_destruct;
- (id)friendPictureStatus;
- (void)setHighlightedState:(_Bool)arg1;
- (void)_showGhostFace:(unsigned long long)arg1;
- (void)_showProfileImages:(id)arg1;
- (void)updateWithFriend:(id)arg1 contexts:(id)arg2;

@end

