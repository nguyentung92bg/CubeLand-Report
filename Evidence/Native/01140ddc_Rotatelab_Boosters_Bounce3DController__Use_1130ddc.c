/* IL2CPP: Rotatelab.Boosters.Bounce3DController$$Use
void Rotatelab_Boosters_Bounce3DController__Use (Rotatelab_Boosters_Bounce3DController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01140f3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Bounce3DController$$Use
   void Rotatelab_Boosters_Bounce3DController__Use (Rotatelab_Boosters_Bounce3DController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Boosters_Bounce3DController__Use_1130ddc(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01140e4c + 0x1140df0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140e50 + 0x1140e04));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01140e54 + 0x1140e18));
  if (iVar1 != 0) {
    BoosterPreventController__SetPopupVisibility_fa3504(iVar1,0,0);
    pcVar2 = (char *)(_UNK_01140f44 + 0x1140e74);
    if (*pcVar2 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01140f48 + 0x1140e88));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01140f4c + 0x1140e94));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01140f50 + 0x1140ea0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01140f54 + 0x1140eac));
      *pcVar2 = '\x01';
    }
                    /* WARNING: Could not recover jumptable at 0x01140ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_01140ec8 + _UNK_01140ed0))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

