//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLInputChatPhoto.h"

@class TLInputPhoto, TLInputPhotoCrop;

@interface TLInputChatPhoto$inputChatPhoto : TLInputChatPhoto
{
    TLInputPhoto *_n_id;
    TLInputPhotoCrop *_crop;
}

@property(retain, nonatomic) TLInputPhotoCrop *crop; // @synthesize crop=_crop;
@property(retain, nonatomic) TLInputPhoto *n_id; // @synthesize n_id=_n_id;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end
