/* IL2CPP: Rotatelab.Boosters.Bounce3DController$$UpdateAnimationState
void Rotatelab_Boosters_Bounce3DController__UpdateAnimationState (Rotatelab_Boosters_Bounce3DController_o* __this, int32_t newState, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Bounce3DController$$UpdateAnimationState
   void Rotatelab_Boosters_Bounce3DController__UpdateAnimationState
   (Rotatelab_Boosters_Bounce3DController_o* __this, int32_t newState, const MethodInfo* method); */

void Rotatelab_Boosters_Bounce3DController__UpdateAnimationState_1130e58
               (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01140f44 + 0x1140e74);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140f48 + 0x1140e88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140f4c + 0x1140e94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140f50 + 0x1140ea0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140f54 + 0x1140eac));
    *pcVar3 = '\x01';
  }
  switch(param_2) {
  case 0:
    iVar1 = *(int *)(param_1 + 0x18);
    puVar2 = *(undefined4 **)(&UNK_01140ee8 + _UNK_01140f58);
    break;
  case 1:
    iVar1 = *(int *)(param_1 + 0x18);
    puVar2 = *(undefined4 **)(&UNK_01140f18 + _UNK_01140f5c);
    break;
  case 2:
    iVar1 = *(int *)(param_1 + 0x18);
    puVar2 = *(undefined4 **)(&UNK_01140ef8 + _UNK_01140f60);
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 0x18);
    puVar2 = *(undefined4 **)(&UNK_01140f08 + _UNK_01140f64);
    break;
  default:
    goto LAB_01140f3c;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Animator__Play_35915ac(iVar1,*puVar2,0,0,0);
LAB_01140f3c:
  return;
}

