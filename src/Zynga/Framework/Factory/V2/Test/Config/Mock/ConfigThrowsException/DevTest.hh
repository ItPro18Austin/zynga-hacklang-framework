<?hh //strict

namespace Zynga\Framework\Factory\V2\Test\Config\Mock\ConfigThrowsException;

use Zynga\Framework\Testing\TestCase\V2\Base as TestCase;
use
  Zynga\Framework\Factory\V2\Test\Config\Mock\ConfigThrowsException\Dev as TestConfig
;
use Zynga\Framework\Exception\V1\Exception;

class DevTest extends TestCase {

  public function test_configValues(): void {
    $this->expectException(Exception::class);
    $obj = new TestConfig();
  }

}
