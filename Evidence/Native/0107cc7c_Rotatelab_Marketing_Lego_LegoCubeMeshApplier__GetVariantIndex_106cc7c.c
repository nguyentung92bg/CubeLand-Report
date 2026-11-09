/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$GetVariantIndex
int32_t Rotatelab_Marketing_Lego_LegoCubeMeshApplier__GetVariantIndex (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, System_String_o* objectName, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$GetVariantIndex
   int32_t Rotatelab_Marketing_Lego_LegoCubeMeshApplier__GetVariantIndex
   (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, System_String_o* objectName, int32_t
   index, const MethodInfo* method); */

uint Rotatelab_Marketing_Lego_LegoCubeMeshApplier__GetVariantIndex_106cc7c
               (int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x84) ^ 0x811c9dc5;
  iVar3 = 0;
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_2 + 8) <= iVar3) break;
    uVar1 = System_String__get_Chars_2a04790(param_2,iVar3,0);
    iVar3 = iVar3 + 1;
    uVar2 = (uVar2 ^ uVar1) * 0x1000193;
  }
  return ((uVar2 ^ param_3) * 0x1000193) % 5;
}

