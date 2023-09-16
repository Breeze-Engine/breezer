//
//  SharedConfig.h
//  BreezerKit
//
//  Created by krisna pranav on 16/09/23.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SharedConfig : NSObject

NS_ASSUME_NONNULL_BEGIN

@property (nonatomic, strong) NSString *applicationName;

@property (nonatomic, strong) NSString *applicationID;

@property (nonatomic, strong) NSString *applicationVersion;

@property (nonatomic, strong, nullable) NSString *applicationPublisher;

@property (nonatomic, strong, nullable) NSURL *applicationURL;

@property (nonatomic, strong, nullable) NSString *applicationCopyright;

@property (nonatomic, strong, nullable) NSString *applicationDescription;

@property (nonatomic, strong, nullable) NSString *applicationDeployType;

@property (nonatomic, strong) NSString *applicationGUID;

@property (nonatomic, strong, nullable) NSString *applicationResourcesDirectory;

@property (nonatomic, strong, nullable) NSString *applicationBuildType;

@property (nonatomic, strong, nullable) NSString *buildHash;

@property (nonatomic, strong, nullable) NSString *buildDate;

@property (nonatomic, strong, nullable) NSString *sdkVersion;

@property (nonatomic, assign, getter=isAnalyticsEnabled) BOOL analyticsEnabled;

@property (nonatomic, assign) BOOL showErrorController;

@property (nonatomic, strong, nullable) UIColor *defaultBackgroundColor;

@property (nonatomic, assign) BOOL logServerEnabled;

@property (nonatomic, assign) BOOL debugEnabled;

+ (SharedConfig *)defaultConfig;

NS_ASSUME_NONNULL_END

@end
