//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLPhoneConnection.h"

@class NSString;

@interface TLPhoneConnection$phoneConnection : TLPhoneConnection
{
    int _port;
    NSString *_server;
    long long _stream_id;
}

@property(nonatomic) long long stream_id; // @synthesize stream_id=_stream_id;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end

