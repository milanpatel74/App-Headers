//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLScheme.h"

@class NSArray, NSString;

@interface TLScheme$scheme : TLScheme
{
    int _version;
    NSString *_scheme_raw;
    NSArray *_types;
    NSArray *_methods;
}

@property(nonatomic) int version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *methods; // @synthesize methods=_methods;
@property(retain, nonatomic) NSArray *types; // @synthesize types=_types;
@property(retain, nonatomic) NSString *scheme_raw; // @synthesize scheme_raw=_scheme_raw;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end
