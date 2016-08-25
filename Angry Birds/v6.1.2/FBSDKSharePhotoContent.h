/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/FBSDKSharingContent.h>

@class NSURL, NSArray, NSString;

@interface FBSDKSharePhotoContent : NSObject <FBSDKSharingContent> {

	NSURL* _contentURL;
	NSArray* _peopleIDs;
	NSString* _placeID;
	NSString* _ref;
	NSArray* _photos;

}

@property (nonatomic,copy) NSArray * photos;                        //@synthesize photos=_photos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * contentURL;                      //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSArray * peopleIDs;                     //@synthesize peopleIDs=_peopleIDs - In the implementation block
@property (nonatomic,copy) NSString * placeID;                      //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * ref;                          //@synthesize ref=_ref - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)peopleIDs;
-(void)setPeopleIDs:(NSArray *)arg1 ;
-(BOOL)isEqualToSharePhotoContent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
@end
