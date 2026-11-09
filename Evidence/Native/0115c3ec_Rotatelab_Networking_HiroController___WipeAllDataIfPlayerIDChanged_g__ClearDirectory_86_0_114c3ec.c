/* IL2CPP: Rotatelab.Networking.HiroController$$<WipeAllDataIfPlayerIDChanged>g__ClearDirectory|86_0
void Rotatelab_Networking_HiroController___WipeAllDataIfPlayerIDChanged_g__ClearDirectory_86_0 (System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$<WipeAllDataIfPlayerIDChanged>g__ClearDirectory|86_0
   void Rotatelab_Networking_HiroController___WipeAllDataIfPlayerIDChanged_g__ClearDirectory_86_0
   (System_String_o* path, const MethodInfo* method); */

void Rotatelab_Networking_HiroController___WipeAllDataIfPlayerIDChanged_g__ClearDirectory_86_0_114c3ec
               (undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = System_IO_Directory__Exists_2b2cbfc(param_1,0);
  if (iVar1 != 0) {
    uVar2 = 0;
    iVar1 = System_IO_Directory__GetFiles_2b2cda0(param_1,0);
    while( true ) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar2) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      System_IO_File__Delete_2b2dfb4(*(undefined4 *)(iVar1 + 0x10 + uVar2 * 4),0);
      uVar2 = uVar2 + 1;
    }
    uVar2 = 0;
    iVar1 = System_IO_Directory__GetDirectories_2b2d118(param_1,0);
    while( true ) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar2) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      System_IO_Directory__Delete_2b2d568(*(undefined4 *)(iVar1 + 0x10 + uVar2 * 4),1,0);
      uVar2 = uVar2 + 1;
    }
  }
  return;
}

