//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernViewModel.h"

@class NSString, UIImage;

@interface TGModernLetteredAvatarViewModel : TGModernViewModel
{
    struct CGSize _size;
    UIImage *_placeholder;
    NSString *_filter;
    NSString *_avatarUri;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_title;
    int _uid;
    long long _groupId;
}

- (void).cxx_destruct;
- (void)setAvatarTitle:(id)arg1 groupId:(long long)arg2;
- (void)setAvatarFirstName:(id)arg1 lastName:(id)arg2 uid:(int)arg3;
- (void)setAvatarUri:(id)arg1;
- (void)bindViewToContainer:(id)arg1 viewStorage:(id)arg2;
- (void)_updateViewStateIdentifier;
- (Class)viewClass;
- (id)initWithSize:(struct CGSize)arg1 placeholder:(id)arg2;

@end
