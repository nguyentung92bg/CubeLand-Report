/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$<Awake>b__73_0
void Rotatelab_Debugging_CreativeCanvasController___Awake_b__73_0 (Rotatelab_Debugging_CreativeCanvasController_o* __this, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$<Awake>b__73_0
   void Rotatelab_Debugging_CreativeCanvasController___Awake_b__73_0
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, float v, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController___Awake_b__73_0_110ebcc(int param_1,float param_2)

{
  int *piVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0111ec6c + 0x111ebe8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ec70 + 0x111ebfc));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
            (*(int *)(param_1 + 0x6c),0.5 <= param_2,**(undefined4 **)(_UNK_0111ec74 + 0x111ec2c));
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0111ec68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xf0))(piVar1,*(undefined4 *)(*piVar1 + 0xf4));
  return;
}

