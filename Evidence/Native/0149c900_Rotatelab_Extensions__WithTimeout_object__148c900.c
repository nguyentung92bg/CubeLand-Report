/* IL2CPP: Rotatelab.Extensions$$WithTimeout<object>
Cysharp_Threading_Tasks_UniTask_T__o Rotatelab_Extensions__WithTimeout_object_ (Cysharp_Threading_Tasks_UniTask_T__o task, System_TimeSpan_o timeout, Il2CppObject* fallback, const MethodInfo_148C900* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$WithTimeout<object>
   Cysharp_Threading_Tasks_UniTask_T__o Rotatelab_Extensions__WithTimeout_object_
   (Cysharp_Threading_Tasks_UniTask_T__o task, System_TimeSpan_o timeout, Il2CppObject* fallback,
   const MethodInfo_148C900* method); */

void Rotatelab_Extensions__WithTimeout_object__148c900
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_8 + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  thunk_FUN_00ec5080((uint)&uStack_68 | 4,0);
  uStack_58 = param_2;
  uStack_54 = param_3;
  uStack_50 = param_4;
  thunk_FUN_00ec5080(&uStack_58,0);
  uStack_48 = param_5;
  uStack_44 = param_6;
  uStack_40 = param_7;
  thunk_FUN_00ec5080(&uStack_40);
  uStack_68 = 0xffffffff;
  iVar2 = *(int *)(*(int *)(param_8 + 0x1c) + 0x18);
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(iVar2);
    iVar1 = *(int *)(iVar2 + 0x1c);
  }
  Rotatelab_Extensions__WithTimeout_d__100_object___MoveNext_17a7930
            (&uStack_68,*(undefined4 *)(iVar1 + 8));
  func_0x010808ac(&uStack_78,(uint)&uStack_68 | 4,*(undefined4 *)(*(int *)(param_8 + 0x1c) + 0x20));
  *(undefined4 *)(param_1 + 1) = uStack_70;
  *param_1 = uStack_78;
  return;
}

