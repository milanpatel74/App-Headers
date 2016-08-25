/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ATContactStorage : NSObject <NSCoding> {

	NSString* name;
	NSString* email;
	NSString* phone;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSString * phone; 
+(id)sharedContactStorage;
+(void)releaseSharedContactStorage;
+(id)contactStoragePath;
+(BOOL)serializedVersionExists;
-(void)setup;
-(void)teardown;
-(void)save;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)phone;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setPhone:(NSString *)arg1 ;
@end
