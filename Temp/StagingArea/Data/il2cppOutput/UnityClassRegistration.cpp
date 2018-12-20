template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_CrashReporting();
	RegisterModule_CrashReporting();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterUnityClass<TextRenderingPrivate::GUIText>(const char*);
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; 
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleRenderer; template <> void RegisterUnityClass<ParticleRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; 
class AnimationClip; 
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; 
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterUnityClass<CloudWebServicesManager>(const char*);
class CrashReportManager; template <> void RegisterUnityClass<CrashReportManager>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class PerformanceReportingManager; template <> void RegisterUnityClass<PerformanceReportingManager>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterUnityClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 89 non stripped classes
	//0. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//1. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//2. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//3. Camera
	RegisterUnityClass<Camera>("Core");
	//4. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//5. Texture
	RegisterUnityClass<Texture>("Core");
	//6. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//7. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//8. GameObject
	RegisterUnityClass<GameObject>("Core");
	//9. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//10. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//11. GameManager
	RegisterUnityClass<GameManager>("Core");
	//12. Renderer
	RegisterUnityClass<Renderer>("Core");
	//13. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//14. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//15. Shader
	RegisterUnityClass<Shader>("Core");
	//16. Material
	RegisterUnityClass<Material>("Core");
	//17. Light
	RegisterUnityClass<Light>("Core");
	//18. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//19. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//20. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//21. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//22. Mesh
	RegisterUnityClass<Mesh>("Core");
	//23. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//24. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//25. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//26. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//27. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//28. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//29. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//30. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//31. Transform
	RegisterUnityClass<Transform>("Core");
	//32. Sprite
	RegisterUnityClass<Sprite>("Core");
	//33. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//34. Animator
	RegisterUnityClass<Animator>("Animation");
	//35. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//36. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//37. Animation
	RegisterUnityClass<Animation>("Animation");
	//38. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//39. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//40. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//41. Collider
	RegisterUnityClass<Collider>("Physics");
	//42. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//43. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//44. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//45. Unity::Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//46. Unity::SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//47. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//48. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//49. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//50. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//51. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//52. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//53. TextRenderingPrivate::GUIText
	RegisterUnityClass<TextRenderingPrivate::GUIText>("TextRendering");
	//54. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//55. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//56. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//57. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//58. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//59. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//60. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//61. ParticleRenderer
	RegisterUnityClass<ParticleRenderer>("ParticlesLegacy");
	//62. TagManager
	RegisterUnityClass<TagManager>("Core");
	//63. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//64. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//65. InputManager
	RegisterUnityClass<InputManager>("Core");
	//66. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//67. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//68. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//69. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//70. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//71. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//72. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//73. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//74. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//75. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//76. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//77. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//78. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//79. CloudWebServicesManager
	RegisterUnityClass<CloudWebServicesManager>("CloudWebServices");
	//80. CrashReportManager
	RegisterUnityClass<CrashReportManager>("CrashReporting");
	//81. PerformanceReportingManager
	RegisterUnityClass<PerformanceReportingManager>("PerformanceReporting");
	//82. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//83. UnityAnalyticsManager
	RegisterUnityClass<UnityAnalyticsManager>("UnityAnalytics");
	//84. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//85. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//86. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//87. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//88. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");

}