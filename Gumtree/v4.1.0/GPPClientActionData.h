/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol NSFastEnumeration;
@class GPPClientAclDetails, GPPClientLoggedRHSComponent, NSObject;

@interface GPPClientActionData : NSObject {

	GPPClientAclDetails* _aclDetails;
	GPPClientLoggedRHSComponent* _rhsComponent;
	NSObject*<NSFastEnumeration> _circles;
	NSObject*<NSFastEnumeration> _circleMembers;

}

@property (nonatomic,retain) GPPClientAclDetails * aclDetails;                        //@synthesize aclDetails=_aclDetails - In the implementation block
@property (nonatomic,retain) GPPClientLoggedRHSComponent * rhsComponent;              //@synthesize rhsComponent=_rhsComponent - In the implementation block
@property (nonatomic,retain) NSObject*<NSFastEnumeration> circles;                    //@synthesize circles=_circles - In the implementation block
@property (nonatomic,retain) NSObject*<NSFastEnumeration> circleMembers;              //@synthesize circleMembers=_circleMembers - In the implementation block
-(NSObject*<NSFastEnumeration>)circles;
-(void)setCircles:(NSObject*<NSFastEnumeration>)arg1 ;
-(GPPClientAclDetails *)aclDetails;
-(GPPClientLoggedRHSComponent *)rhsComponent;
-(NSObject*<NSFastEnumeration>)circleMembers;
-(void)setAclDetails:(GPPClientAclDetails *)arg1 ;
-(void)setRhsComponent:(GPPClientLoggedRHSComponent *)arg1 ;
-(void)setCircleMembers:(NSObject*<NSFastEnumeration>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
