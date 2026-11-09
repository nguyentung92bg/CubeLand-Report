/* IL2CPP: Rotatelab.Extensions$$Find<HiddenChestController.HiddenChestPrefabData, int>
Rotatelab_Scripts_HiddenChestController_HiddenChestPrefabData_o Rotatelab_Extensions__Find_HiddenChestController_HiddenChestPrefabData__int_ (System_Collections_Generic_IList_T__o* list, int32_t parameter, System_Func_T__P__bool__o* selector, const MethodInfo_1486F58* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Find<HiddenChestController.HiddenChestPrefabData, int>
   Rotatelab_Scripts_HiddenChestController_HiddenChestPrefabData_o
   Rotatelab_Extensions__Find_HiddenChestController_HiddenChestPrefabData__int_
   (System_Collections_Generic_IList_T__o* list, int32_t parameter, System_Func_T__P__bool__o*
   selector, const MethodInfo_1486F58* method); */

void Rotatelab_Extensions__Find_HiddenChestController_HiddenChestPrefabData__int__1486f58
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(int *)(param_5 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01497008 + 0x1496f8c)), *(int *)(param_5 + 0x1c) == 0)) {
    FUN_00efd7c4(param_5);
  }
  uStack_1c = 0;
  uStack_20 = 0;
  if (*(int *)(**(int **)(_UNK_0149700c + 0x1496fb0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_HiddenChestController_HiddenChestPrefabData__int__1489ec4
                    (param_2,param_3,param_4,&uStack_20,
                     *(undefined4 *)(*(int *)(param_5 + 0x1c) + 0xc));
  if (iVar1 == 0) {
    uStack_1c = 0;
    uStack_20 = 0;
  }
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  return;
}

