/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBVideoHomePaginatedVScrollComponentState : NSObject {

	NSArray* _subComponents;
	BOOL _hasNextPage;

}

@property (nonatomic,copy,readonly) NSArray * subComponents;              //@synthesize subComponents=_subComponents - In the implementation block
@property (nonatomic,readonly) BOOL hasNextPage;                          //@synthesize hasNextPage=_hasNextPage - In the implementation block
-(id)initWithPaginatedSubComponents:(id)arg1 hasNextPage:(BOOL)arg2 ;
-(NSArray *)subComponents;
-(BOOL)hasNextPage;
@end
