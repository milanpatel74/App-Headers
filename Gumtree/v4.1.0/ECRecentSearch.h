/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:20 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class ECSearchParameters, NSURL, NSDate, NSString;

@interface ECRecentSearch : NSObject <NSCoding> {

	ECSearchParameters* _searchParameters;
	NSURL* _imageURL;
	NSDate* _lastRunDate;
	NSString* _localizedSortOrder;

}

@property (copy) ECSearchParameters * searchParameters;              //@synthesize searchParameters=_searchParameters - In the implementation block
@property (retain) NSURL * imageURL;                                 //@synthesize imageURL=_imageURL - In the implementation block
@property (retain) NSDate * lastRunDate;                             //@synthesize lastRunDate=_lastRunDate - In the implementation block
@property (retain) NSString * localizedSortOrder;                    //@synthesize localizedSortOrder=_localizedSortOrder - In the implementation block
-(id)categoryImage;
-(id)lastRunDateString;
-(NSString *)localizedSortOrder;
-(void)setLocalizedSortOrder:(NSString *)arg1 ;
-(BOOL)isSane;
-(void)setLastRunDate:(NSDate *)arg1 ;
-(BOOL)isEqualToRecentSearch:(id)arg1 ;
-(NSDate *)lastRunDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)category;
-(id)displayName;
-(ECSearchParameters *)searchParameters;
-(void)setSearchParameters:(ECSearchParameters *)arg1 ;
-(id)keywords;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end
