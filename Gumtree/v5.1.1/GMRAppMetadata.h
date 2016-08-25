/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GMRAppMetadata : NSObject {

	int _lastBundleIndex;
	double _lastBundleStartTimestamp;
	double _lastBundleEndTimestamp;

}

@property (nonatomic,readonly) int lastBundleIndex;                        //@synthesize lastBundleIndex=_lastBundleIndex - In the implementation block
@property (assign,nonatomic) double lastBundleStartTimestamp;              //@synthesize lastBundleStartTimestamp=_lastBundleStartTimestamp - In the implementation block
@property (assign,nonatomic) double lastBundleEndTimestamp;                //@synthesize lastBundleEndTimestamp=_lastBundleEndTimestamp - In the implementation block
-(id)initWithLastBundleIndex:(int)arg1 lastBundleStartTimestamp:(double)arg2 lastBundleEndTimestamp:(double)arg3 ;
-(void)incrementLastBundleIndex;
-(int)lastBundleIndex;
-(double)lastBundleStartTimestamp;
-(void)setLastBundleStartTimestamp:(double)arg1 ;
-(double)lastBundleEndTimestamp;
-(void)setLastBundleEndTimestamp:(double)arg1 ;
@end
