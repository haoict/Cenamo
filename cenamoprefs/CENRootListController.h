#import <Preferences/PSListController.h>
#import <Preferences/PSTableCell.h>
#import <Preferences/PSSpecifier.h>
#import <Preferences/PSListItemsController.h>
#import <Preferences/PSSliderTableCell.h>
// Using libstylepicker, i cloned the whole thing because it's not specified ho you're supposed to include it in theos and no resources are given
// Made by boo-dev https://github.com/boo-dev https://twitter.com/BooDev

@interface NSTask : NSObject
@property(copy) NSArray *arguments;
@property(copy) NSString *launchPath;
- (id)init;
- (void)waitUntilExit;
- (void)launch;
@end

@interface CENRootListController : PSListController
@property (nonatomic, strong) NSMutableDictionary *mySavedSpecifiers;
@end

@protocol PreferencesTableCustomView
- (id)initWithSpecifier:(id)arg1;
@end

@interface CenamoHeaderCell : PSTableCell <PreferencesTableCustomView> {
    UIView *bgView;
    UILabel *packageNameLabel;
    UILabel *developerLabel;
    UILabel *versionLabel;
}
@end

@interface KRLabeledSliderCell : PSSliderTableCell
@end

@interface PSListController (iOS12Plus)
-(BOOL)containsSpecifier:(id)arg1;
@end

@interface UIDevice (Cenamo)
-(id)_currentProduct;
@end

@interface NSUserDefaults (Cenamo)
-(id)objectForKey:(NSString *)key inDomain:(NSString *)domain;
-(void)setObject:(id)value forKey:(NSString *)key inDomain:(NSString *)domain;
@end

@interface CENLinkDefaultPreviewCell : PSTableCell
@property (nonatomic, strong) UIView *defaultView;
@end

@interface CENLinkChargingPreviewCell : PSTableCell
@property (nonatomic, strong) UIView *chargingView;
@end

@interface CENLinkLowBatteryPreviewCell : PSTableCell
@property (nonatomic, strong) UIView *lowBatteryView;
@end

@interface CENLinkLowPowerModePreviewCell : PSTableCell
@property (nonatomic, strong) UIView *lowPowerModeView;
@end
