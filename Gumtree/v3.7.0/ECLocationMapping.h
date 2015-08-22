/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class CLLocation, ECLocation, NSString, NSMutableArray;

@interface ECLocationMapping : NSObject {

	CLLocation* _clLocation;
	ECLocation* _ecLocation;
	NSString* _requestID;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,retain) CLLocation * clLocation;                        //@synthesize clLocation=_clLocation - In the implementation block
@property (nonatomic,retain) ECLocation * ecLocation;                        //@synthesize ecLocation=_ecLocation - In the implementation block
@property (nonatomic,retain) NSString * requestID;                           //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
-(void)setClLocation:(CLLocation *)arg1 ;
-(ECLocation *)ecLocation;
-(void)setEcLocation:(ECLocation *)arg1 ;
-(CLLocation *)clLocation;
-(NSString *)requestID;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(NSMutableArray *)completionBlocks;
@end
