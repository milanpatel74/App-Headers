/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GCMD2SInfo : NSObject {

	int _streamId;
	NSString* _d2sID;

}

@property (assign,nonatomic) int streamId;                  //@synthesize streamId=_streamId - In the implementation block
@property (nonatomic,retain) NSString * d2sID;              //@synthesize d2sID=_d2sID - In the implementation block
-(int)streamId;
-(NSString *)d2sID;
-(id)initWithStreamId:(int)arg1 d2sId:(id)arg2 ;
-(void)setStreamId:(int)arg1 ;
-(void)setD2sID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
