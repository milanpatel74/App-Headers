/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSArray;

@interface ECAPIUserAdStatsRequest : ECAPIRequestBase {

	NSArray* _adIDs;

}

@property (nonatomic,retain) NSArray * adIDs;              //@synthesize adIDs=_adIDs - In the implementation block
-(void)setAdIDs:(NSArray *)arg1 ;
-(NSArray *)adIDs;
-(id)initWithAdIDs:(id)arg1 ;
-(id)init;
-(id)command;
-(id)requestURL;
@end
