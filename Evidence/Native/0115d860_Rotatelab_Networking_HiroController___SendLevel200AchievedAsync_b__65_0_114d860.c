/* IL2CPP: Rotatelab.Networking.HiroController$$<SendLevel200AchievedAsync>b__65_0
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController___SendLevel200AchievedAsync_b__65_0 (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$<SendLevel200AchievedAsync>b__65_0
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_Networking_HiroController___SendLevel200AchievedAsync_b__65_0
   (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController___SendLevel200AchievedAsync_b__65_0_114d860
               (undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0115d8f4 + 0x115d87c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d8f8 + 0x115d890));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d8fc + 0x115d89c));
    *pcVar2 = '\x01';
  }
  uVar1 = Rotatelab_GameExtensions__UpdateCustomPropertyAsync_fb5a1c
                    (*(undefined4 *)(param_2 + 0x24),**(undefined4 **)(_UNK_0115d904 + 0x115d8c0),
                     **(undefined4 **)(_UNK_0115d900 + 0x115d8b4),0,0);
  Cysharp_Threading_Tasks_UniTaskExtensions__AsUniTask_321dc9c(&uStack_18,uVar1,1,0);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}

