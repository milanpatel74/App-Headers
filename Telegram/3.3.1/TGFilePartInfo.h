//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface TGFilePartInfo : NSObject
{
    int _partLength;
    int _downloadedLength;
    id _token;
    double _startTime;
    NSData *_downloadedData;
}

@property(retain, nonatomic) NSData *downloadedData; // @synthesize downloadedData=_downloadedData;
@property(nonatomic) int downloadedLength; // @synthesize downloadedLength=_downloadedLength;
@property(nonatomic) int partLength; // @synthesize partLength=_partLength;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) id token; // @synthesize token=_token;
- (void).cxx_destruct;

@end

