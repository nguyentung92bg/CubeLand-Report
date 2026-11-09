/* IL2CPP: Rotatelab.SagaMap.SagaMapController$$<NextLevelAnimation>g__NextLevelAnim|13_0
System_Collections_IEnumerator_o* Rotatelab_SagaMap_SagaMapController___NextLevelAnimation_g__NextLevelAnim_13_0 (Rotatelab_SagaMap_SagaMapController_o* __this, UnityEngine_Vector2_o fromPos, UnityEngine_Vector2_o targetPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SagaMap.SagaMapController$$<NextLevelAnimation>g__NextLevelAnim|13_0
   System_Collections_IEnumerator_o*
   Rotatelab_SagaMap_SagaMapController___NextLevelAnimation_g__NextLevelAnim_13_0
   (Rotatelab_SagaMap_SagaMapController_o* __this, UnityEngine_Vector2_o fromPos,
   UnityEngine_Vector2_o targetPos, const MethodInfo* method); */

int Rotatelab_SagaMap_SagaMapController___NextLevelAnimation_g__NextLevelAnim_13_0_1082858
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010928e4 + 0x1092874);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010928e8 + 0x1092890));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010928ec + 0x10928a4));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  *(undefined4 *)(iVar1 + 0x20) = param_5;
  return iVar1;
}

