//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLUpdate.h"

@class NSArray;

@interface TLUpdate$updateRestoreMessages : TLUpdate
{
    int _pts;
    NSArray *_messages;
}

@property(nonatomic) int pts; // @synthesize pts=_pts;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end

