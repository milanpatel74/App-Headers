/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ECAPIExtendedInfo : NSObject {

	NSString* _parentID;
	NSMutableArray* _properties;

}

@property (nonatomic,retain) NSString * parentID;                      //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;              //@synthesize properties=_properties - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSMutableArray *)properties;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(NSString *)parentID;
-(void)setParentID:(NSString *)arg1 ;
@end
